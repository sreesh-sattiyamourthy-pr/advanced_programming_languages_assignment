function add(a, b) {
    return a + b;
}

console.log(add(5, 3));        // 8 (number)
console.log(add("5", "3"));    // "53" (string)
console.log(add(5, "3"));      // "53" (string due to coercion)
