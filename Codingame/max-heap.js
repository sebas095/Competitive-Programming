class MaxHeap {
  static FRONT = 1;

  constructor(maxsize) {
    this.maxsize = maxsize;
    this.size = 0;
    this.heap = new Array(this.maxsize + 1);
    this.heap[0] = Number.MAX_SAFE_INTEGER;
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

  maxHeapify(pos) {
    if (!this.isLeaf(pos)) {
      if (
        this.heap[pos] < this.heap[this.leftChild(pos)] ||
        this.heap[pos] < this.heap[this.rightChild(pos)]
      ) {
        if (this.heap[this.leftChild(pos)] > this.heap[this.rightChild(pos)]) {
          this.swap(pos, this.leftChild(pos));
          this.maxHeapify(this.leftChild(pos));
        } else {
          this.swap(pos, this.rightChild(pos));
          this.maxHeapify(this.rightChild(pos));
        }
      }
    }
  }

  insert(element) {
    if (this.size >= this.maxsize) return;

    this.heap[++this.size] = element;
    let current = this.size;

    while (this.heap[current] > this.heap[this.parent(current)]) {
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

  remove() {
    const popped = this.heap[MaxHeap.FRONT];
    this.heap[MaxHeap.FRONT] = this.heap[this.size--];
    this.maxHeapify(MaxHeap.FRONT);
    return popped;
  }
}

function main() {
  console.log("The Max Heap is");
  const maxHeap = new MaxHeap(15);

  maxHeap.insert(5);
  maxHeap.insert(3);
  maxHeap.insert(17);
  maxHeap.insert(10);
  maxHeap.insert(84);
  maxHeap.insert(19);
  maxHeap.insert(6);
  maxHeap.insert(22);
  maxHeap.insert(9);

  maxHeap.print();

  console.log("The Max val is", maxHeap.remove());
}

main();
