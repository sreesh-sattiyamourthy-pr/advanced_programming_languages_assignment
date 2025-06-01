fn main() {
    let s = String::from("Hello, Rust!");
    print_string(&s);
    // Ownership remains with main
    println!("Still accessible in main: {}", s);
}

fn print_string(s: &String) {
    println!("Inside function: {}", s);
}
