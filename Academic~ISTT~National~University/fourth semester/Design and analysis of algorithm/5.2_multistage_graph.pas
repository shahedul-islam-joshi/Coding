1  Algorithm FGraph(G, k, n, p)
2  // The input is a k-stage graph G = (V, E) with n vertices
3  // indexed in order of stages. E is a set of edges and c[i, j]
4  // is the cost of <i, j>. p[1 : k] is a minimum-cost path.
5  {
6       cost[n] := 0.0;
7       for j := n - 1 to 1 step -1 do
8       { // Compute cost[j].
9            Let r be a vertex such that <j, r> is an edge
10           of G and c[j, r] + cost[r] is minimum;
11           cost[j] := c[j, r] + cost[r];
12           d[j] := r;
13      }
14      // Find a minimum-cost path.
15      p[1] := 1; p[k] := n;
16      for j := 2 to k - 1 do p[j] := d[p[j - 1]];
17 }
