#include <bits/stdc++.h>
using namespace std;

int main() {
    int elfsum = 0, top_three_sum = 0, n;
    string input_num;
    vector<int> sums;
    fstream file;
    file.open("1.in");

    while (getline(file, input_num)) {
        if (input_num == "") {
            sums.push_back(elfsum);
            elfsum = 0;
        } else {
            n = stoi(input_num);
            elfsum += n;
        }
    }

    sort(sums.begin(), sums.end(), greater<int>());
    for (int i = 0; i < 3; i++) top_three_sum += sums[i];

    cout << "top elf: " << sums[0] << '\n';
    cout << "top 3 elves: " << top_three_sum << '\n';

    file.close();
}
