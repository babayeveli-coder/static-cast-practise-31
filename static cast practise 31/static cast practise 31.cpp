

#include <iostream>
using namespace std;
int main()
{
    

    //1


    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for (int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

    //2

    srand(time(0));
    int arr[20];

    for (int i = 0; i < 20; i++) {
        arr[i] = rand() % 101;
    }

    for (int i = 0; i < 20; i += 2) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

    //3

    srand(time(0));
    int arr[10];
    int sum = 0, count = 0;

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 41 - 20;
        if (arr[i] > 0) {
            sum += arr[i];
            count++;
        }
    }

    if (count > 0) {
        cout << "Müsbət ədədlərin ədədi ortası: " << (double)sum / count << endl;
    }
    else {
        cout << "Müsbət ədəd yoxdur." << endl;
    }

    return 0;

    //4


    srand(time(0));
    int arr[20];
    int positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < 20; i++) {
        arr[i] = rand() % 11 - 5;
        if (arr[i] > 0) {
            positive++;
        }
        else if (arr[i] < 0) {
            negative++;
        }
        else {
            zero++;
        }
    }

    cout << "Müsbətlər: " << positive << ", Mənfilər: " << negative << ", Sıfırlar: " << zero << endl;

    return 0;


    //5

    srand(time(0));
    int arr[10];
    int sum_even = 0, sum_odd = 0, count_odd = 0;

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 101;
    }

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            sum_even += arr[i];
        }
        else {
            sum_odd += arr[i];
            count_odd++;
        }
    }

    cout << "İndeksi cüt olanların cəmi: " << sum_even << endl;
    if (count_odd > 0) {
        cout << "İndeksi tək olanların ədədi ortası: " << (double)sum_odd / count_odd << endl;
    }

    return 0;

    //6


    srand(time(0));
    char arr[10];
    int letters = 0, digits = 0, punctuation = 0;

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 256;

        if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z')) {
            letters++;
        }
        else if (arr[i] >= '0' && arr[i] <= '9') {
            digits++;
        }
        else if ((arr[i] >= 33 && arr[i] <= 47) || (arr[i] >= 58 && arr[i] <= 64) ||
            (arr[i] >= 91 && arr[i] <= 96) || (arr[i] >= 123 && arr[i] <= 126)) {
            punctuation++;
        }
    }

    cout << "Hərflər: " << letters << ", Rəqəmlər: " << digits << ", Punktuasiya işarələri: " << punctuation << endl;

    return 0;


    //7

    srand(time(0));
    int arr[50], userNum, count = 0;

    for (int i = 0; i < 50; i++) {
        arr[i] = rand() % 100 + 1;
    }

    cout << "Rəqəm daxil edin (1-100 arası): ";
    cin >> userNum;

    for (int i = 0; i < 50; i++) {
        if (arr[i] == userNum) {
            count++;
        }
    }

    cout << "Massivdə " << userNum << " rəqəmindən " << count << " dəfə var." << endl;

    return 0;

    //8


    srand(time(0));
    int arr[10];
    int count3 = 0, count5 = 0, count7 = 0;

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100 + 1;
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] % 3 == 0) count3++;
        if (arr[i] % 5 == 0) count5++;
        if (arr[i] % 7 == 0) count7++;
    }

    cout << "3-ə bölünənlər: " << count3 << endl;
    cout << "5-ə bölünənlər: " << count5 << endl;
    cout << "7-yə bölünənlər: " << count7 << endl;

    return 0;

    //9

    srand(time(0));
    int arr[10];
    int count = 0;

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100 + 1;
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] % 3 == 0 && arr[i] % 5 != 0) {
            count++;
        }
    }

    cout << "3-ə bölünüb, 5-ə bölünməyən rəqəmlər: " << count << endl;

    return 0;

    //10


    srand(time(0));
    int arr[10], sum = 0;
    bool foundNegative = false;

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 41 - 10;
    }

    for (int i = 0; i < 10; i++) {
        if (foundNegative) {
            sum += arr[i];
        }
        else if (arr[i] < 0) {
            foundNegative = true;
        }
    }

    cout << "Birinci mənfi ədəddən sonra gələn rəqəmlərin cəmi: " << sum << endl;

    return 0;



    //11


    srand(time(0));
    int arr[10], sum = 0;
    bool foundPositive = false;

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 51 - 30;
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 10; i++) {
        if (foundPositive) {
            sum += arr[i];
        }
        else if (arr[i] > 0) {
            foundPositive = true;
        }
    }

    cout << "Birinci müsbət ədəddən sonra gələn rəqəmlərin cəmi: " << sum << endl;

    return 0;
}

