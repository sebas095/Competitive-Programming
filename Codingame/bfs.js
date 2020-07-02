function bfs(graph, init) {
  const visited = new Array(graph.length).fill(false);
  const queue = [];
  const path = [];
  queue.push(init);

  while (queue.length) {
    const node = queue.shift();
    path.push(node);
    visited[node] = true;

    for (let i = 0; i < graph[node].length; i++) {
      const tmp = graph[node][i];
      if (!visited[tmp]) queue.push(tmp);
    }
  }

  return path.join();
}

function main() {
  const graph = [[1, 2], [0, 3, 4], [0, 5, 6], [1], [1], [2], [2]];
  console.log(bfs(graph, 0)); // 0,1,2,3,4,5,6
}

main();
