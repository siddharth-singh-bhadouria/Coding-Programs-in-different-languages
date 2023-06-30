#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

class RAG
{
public:
    map<string, int> resources;     // maps resource names to available count
    map<string, int> processes;     // maps process names to IDs (0 to n-1)
    vector<vector<int>> adj_matrix; // adjacency matrix representation
    void add_process(string name)
    {
        processes[name] = processes.size();
        adj_matrix.resize(processes.size());
        for (int i = 0; i < processes.size(); i++)
        {
            adj_matrix[i].resize(resources.size());
        }
    }
    void add_resource(string name, int count)
    {
        resources[name] = count;
        for (int i = 0; i < processes.size(); i++)
        {
            adj_matrix[i].resize(resources.size());
        }
    }
    void add_edge(string process_name, string resource_name)
    {
        int process_id = processes[process_name];
        int resource_id = resources.size() - resources[resource_name];
        adj_matrix[process_id][resource_id] = 1;
    }
};

class WFG
{
public:
    vector<vector<int>> adj_matrix; // adjacency matrix representation
    void from_rag(RAG &rag)
    {
        adj_matrix.resize(rag.processes.size());
        for (int i = 0; i < rag.processes.size(); i++)
        {
            adj_matrix[i].resize(rag.processes.size());
            for (int j = 0; j < rag.resources.size(); j++)
            {
                if (rag.adj_matrix[i][j] == 1)
                {
                    for (int k = 0; k < rag.processes.size(); k++)
                    {
                        if (k != i && rag.adj_matrix[k][j] == 1)
                        {
                            adj_matrix[i][k] = 1;
                        }
                    }
                }
            }
        }
    }
};

int main()
{
    RAG rag;
    rag.add_process("P1");
    rag.add_process("P2");
    rag.add_process("P3");
    rag.add_resource("R1", 1);
    rag.add_resource("R2", 2);
    rag.add_resource("R3", 1);
    rag.add_edge("P1", "R1");
    rag.add_edge("P2", "R2");
    rag.add_edge("P3", "R2");
    rag.add_edge("P2", "R1");
    rag.add_edge("P3", "R3");
    WFG wfg;
    wfg.from_rag(rag);
    for (int i = 0; i < wfg.adj_matrix.size(); i++)
    {
        for (int j = 0; j < wfg.adj_matrix.size(); j++)
        {
            cout << wfg.adj_matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
