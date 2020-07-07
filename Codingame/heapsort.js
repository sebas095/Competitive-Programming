class HeapSort {
  sort(arr) {
    const n = arr.length;

    for (let i = Math.floor(n / 2) - 1; i >= 0; i--) {
      this.heapify(arr, n, i);
    }

    for (let i = n - 1; i > 0; i--) {
      [arr[0], arr[i]] = [arr[i], arr[0]]; // swap
      this.heapify(arr, i, 0);
    }
  }

  heapify(arr, n, i) {
    let largest = i; // Initialize largest as root
    const l = 2 * i + 1; // left = 2*i + 1
    const r = 2 * i + 2; // right = 2*i + 2

    if (l < n && arr[l] > arr[largest]) largest = l;

    if (r < n && arr[r] > arr[largest]) largest = r;

    if (largest != i) {
      [arr[i], arr[largest]] = [arr[largest], arr[i]]; // swap

      // Recursively heapify the affected sub-tree
      this.heapify(arr, n, largest);
    }
  }

  static printArray(arr) {
    console.log(arr.join(" "));
  }
}

function main() {
  const arr = [12, 11, 13, 5, 6, 7];
  const obj = new HeapSort();

  obj.sort(arr);
  console.log("Sorted array is");
  HeapSort.printArray(arr);
}

main();
