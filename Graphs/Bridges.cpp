
function find_bridges(adj[][], V, Edge[], E, isBridge[])
    for i = 0 to E
        adj[Edge[i].u][Edge[i].v]=adj[Edge[i].v][Edge[i].u]=0
        for j = 0 to V
            visited[j] = false
        Queue.Insert(Edge[i].u])
        visited[Edge[i].u] = true
        check = false
        while Queue.isEmpty() == false
            x = Queue.top()
            if x == Edge[i].v
                check = true
                BREAK
            Queue.Delete()
            for j = 0 to V
                if adj[x][j] == true AND visited[j] == false
                    Queue.insert(j)
                    visited[j] = true
        adj[Edge[i].u][Edge[i].v]=adj[Edge[i].v][Edge[i].u]=1
        if check == false
            isBridge[i] = true
