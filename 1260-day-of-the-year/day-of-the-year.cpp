class Solution {
public:
    int dayOfYear(string date) {
    int year = stoi(date.substr(0,4));
    int month = stoi(date.substr(5, 7));
    int day = stoi(date.substr(8));
    int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int totalDays = day;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        days[2] = 29;
    }
    for (int i = 1; i < month; i++) {
        totalDays += days[i];
    }
    return totalDays;
}
};