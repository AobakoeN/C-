#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> getKeywordSuggestions(const vector<string>& repository, const string& customerQuery) {
    vector<string> suggestions;

    if (customerQuery.size() < 2) {
        return suggestions;
    }

    for (const string& keyword : repository) {
        if (keyword.substr(0, customerQuery.size()) == customerQuery) {
            suggestions.push_back(keyword);
        }
    }

    sort(suggestions.begin(), suggestions.end());

    if (suggestions.size() > 3) {
        suggestions.resize(3);
    }

    return suggestions;
}

int main() {
    vector<string> repository = {"mobile", "mouse", "moneypot", "monitor", "mousepad"};
    vector<string> customerQuery = {"mouse"};

    for (const string& query : customerQuery) {
        vector<string> suggestions = getKeywordSuggestions(repository, query);
        for (const string& suggestion : suggestions) {
            cout << suggestion << " ";
        }
        cout << endl;
    }

    return 0;
}
