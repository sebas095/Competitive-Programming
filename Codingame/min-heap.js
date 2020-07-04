class MinHeap {
  static FRONT = 1;

  constructor(maxsize) {
    this.maxsize = maxsize;
    this.size = 0;
    this.heap = new Array(this.maxsize + 1);
    this.heap[0] = Number.MIN_SAFE_INTEGER;
  }

  parent(pos) {
    return Math.floor(pos / 2);
  }

  leftChild(pos) {
    return 2 * pos;
  }

  rightChild(pos) {
    return 2 * pos + 1;
  }

  isLeaf(pos) {
    return pos >= Math.floor(this.size / 2) && pos <= this.size;
  }

  swap(fpos, spos) {
    [this.heap[fpos], this.heap[spos]] = [this.heap[spos], this.heap[fpos]];
  }

  minHeapify(pos) {
    if (!this.isLeaf(pos)) {
      if (
        this.heap[pos] > this.heap[this.leftChild(pos)] ||
        this.heap[pos] > this.heap[this.rightChild(pos)]
      ) {
        if (this.heap[this.leftChild(pos)] > this.heap[this.rightChild(pos)]) {
          this.swap(pos, this.leftChild(pos));
          this.minHeapify(this.leftChild(pos));
        } else {
          this.swap(pos, this.rightChild(pos));
          this.minHeapify(this.rightChild(pos));
        }
      }
    }
  }

  insert(element) {
    if (this.size >= this.maxsize) return;

    this.heap[++this.size] = element;
    let current = this.size;

    while (this.heap[current] < this.heap[this.parent(current)]) {
      this.swap(current, this.parent(current));
      current = this.parent(current);
    }
  }

  print() {
    for (let i = 1; i <= Math.floor(this.size / 2); i++) {
      const msg = `
                    PARENT: ${this.heap[i]} 
        LEFT CHILD: ${this.heap[2 * i]}   RIGHT CHILD: ${this.heap[2 * i + 1]}
      `;
      console.log(msg);
    }
  }

  minHeap() {
    for (let pos = Math.floor(this.size / 2); pos >= 1; pos--) {
      this.minHeapify(pos);
    }
  }

  remove() {
    const popped = this.heap[MinHeap.FRONT];
    this.heap[MinHeap.FRONT] = this.heap[this.size--];
    this.minHeapify(MinHeap.FRONT);
    return popped;
  }
}

function main() {
  console.log("The Min Heap is");
  const minHeap = new MinHeap(15);

  minHeap.insert(5);
  minHeap.insert(3);
  minHeap.insert(17);
  minHeap.insert(10);
  minHeap.insert(84);
  minHeap.insert(19);
  minHeap.insert(6);
  minHeap.insert(22);
  minHeap.insert(9);

  minHeap.minHeap();
  minHeap.print();

  console.log("The Min val is", minHeap.remove());
}

main();
