void f(vector<int>& v) {
    v[0]; // A
    v.at(0); // B
}
//.at() is more safe than [], .at() is safe on empty vectors and [] leads to ub when checking to far on the right 


//Size vs Capacity 
//Resize(Number of elements in the vector) vs Reserve(Memory)

//use const for looping 

//compare iterators using !=, not < just so we have uniform behaviour across all containers