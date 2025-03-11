#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    fastIO();
    int t;
    cin >> t;
    
    unordered_map<int, int> freq;  // Tracks occurrences of numbers
    map<int, set<int>> freq_map;   // Frequency -> Set of numbers (sorted)
    
    while (t--) {
        int q;
        cin >> q;
        
        if (q == 1) {  // Insert query
            int x;
            cin >> x;

            // Remove from old frequency group
            if (freq[x] > 0) {
                freq_map[freq[x]].erase(x);
                if (freq_map[freq[x]].empty()) {
                    freq_map.erase(freq[x]);
                }
            }

            // Increase frequency
            freq[x]++;
            freq_map[freq[x]].insert(x);

        } else if (q == 2) {  // Find and remove min frequency element
            if (freq.empty()) {
                cout << "empty\n";
                continue;
            }

            // Find the smallest frequency
            auto it = freq_map.begin(); // First element in map has min frequency
            int min_freq = it->first;
            int max_value = *it->second.rbegin();  // Get the largest element in this frequency

            cout << max_value << "\n";

            // Remove ⌊min_freq / 2⌋ occurrences
            int remove_count = min_freq / 2;
            freq[max_value] -= remove_count;

            // Remove from old frequency group
            freq_map[min_freq].erase(max_value);
            if (freq_map[min_freq].empty()) {
                freq_map.erase(min_freq);
            }

            // Add to new frequency group if it still exists
            if (freq[max_value] > 0) {
                freq_map[freq[max_value]].insert(max_value);
            } else {
                freq.erase(max_value);
            }
        }
    }

    return 0;
}
