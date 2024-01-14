fn print_string(x: String){
    println!("{}", x);
}

fn main(){
    let name: String  = String::from("This is Rust baby!");
    
    print_string(name);
}