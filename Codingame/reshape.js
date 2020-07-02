function reshape(n, str) {
  const text = str.split(" ").join("").split("");
  let result = "";
  let i = 0;

  for (i = 0; i < text.length; i += n) {
    result += text.slice(i, i + n).join("");
    result += " ";
  }

  return result.split(" ").join("\n");
}

console.log(reshape(3, "hola mundo l")); // hol amu ndo
