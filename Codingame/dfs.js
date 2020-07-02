function dfs(graph, node, visited, path) {
  path.push(node);
  visited[node] = true;

  for (let i = 0; i < graph[node].length; i++) {
    const tmp = graph[node][i];
    if (!visited[tmp]) dfs(graph, tmp, visited, path);
  }
}

function dfsIt(graph, init) {
  const visited = new Array(graph.length).fill(false);
  const stack = [];
  const path = [];
  stack.push(init);

  while (stack.length) {
    const node = stack.pop();
    visited[node] = true;
    path.push(node);

    for (let i = 0; i < graph[node].length; i++) {
      const tmp = graph[node][i];
      if (!visited[tmp]) stack.push(tmp);
    }
  }

  return path.join();
}

function main() {
  const graph = [[1, 2], [0, 3, 4], [0, 5, 6], [1], [1], [2], [2]];
  const visited = new Array(7).fill(false);
  const path = [];

  dfs(graph, 0, visited, path);
  console.log(path.join()); // 0,1,3,4,2,5,6
  console.log(dfsIt(graph, 0)); // 0,2,6,5,1,4,3
}

main();
