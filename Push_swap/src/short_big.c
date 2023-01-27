int main() {
std::stack<int> a, b;
int size = a.size();
int max_num = size - 1; // the biggest number in a is stack_size - 1
int max_bits = 0; // how many bits for max_num
while ((max_num >> max_bits) != 0) ++max_bits;
for (int i = 0 ; i < max_bits ; ++i) // repeat for max_bits times
{
for(int j = 0 ; j < size ; ++j)
{
int num = a.top(); // top number of A
if ((num >> i)&1 == 1) ra();
// if the (i + 1)-th bit is 1, leave in stack a
else pb();
// otherwise push to stack b
}
// put into boxes done
while (!b.empty()) pa(); // while stack b is not empty, do pa

Copy code
// connect numbers done
}
return 0;
}
