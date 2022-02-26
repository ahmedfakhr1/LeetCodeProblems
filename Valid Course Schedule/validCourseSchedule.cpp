class Solution {
public:

bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    vector<int> indegree(numCourses, 0);
    vector<vector<bool>> graph(numCourses, vector<bool>(numCourses
        , false));
    //building the graph
    for (size_t i = 0; i < prerequisites.size(); i++)
    {
        int a = prerequisites[i][0];
        int b = prerequisites[i][1];
        indegree[a]++;
        graph[b][a] = true;


    }
    queue<int> q;
    for (size_t i = 0; i < indegree.size(); i++)
    {
        if (indegree[i] == 0) q.push(i);

    }
    while (!q.empty()) {

        int current = q.front();
        q.pop();
        for (size_t i = 0; i < graph[current].size(); i++)
        {
            if (graph[current][i] == true) {
                indegree[i]--;
                if (indegree[i] == 0) q.push(i);

            }
        }




    }
    for (int v : indegree) {
        if (v != 0) return false;
    }
    return true;
}

};
