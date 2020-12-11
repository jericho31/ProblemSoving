// 16min

#include <iostream>
#include <algorithm>

using std::cin; using std::cout;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    for (int citer = 1; citer <= 10; ++citer)
    {
        int n;
        cin >> n;
        int arr[100] = {};
        for (int i = 0; i < 100; ++i) {
            cin >> arr[i];
        }
        std::sort(arr, arr + 100);
        for (int i = 0; i < n; ++i) {
            if (arr[99] - arr[0] <= 1) break;
            ++arr[0]; --arr[99];
            int a = 0;
            while (a <= 98 && arr[a] > arr[a + 1]) {  // ������ ���¿� ���� 2 �̻��̴ϱ� ���� ��� ���� ����...���� �Ҿ��ϴ� �߰�.
                int tmp = arr[a];
                arr[a] = arr[a + 1];
                arr[a + 1] = tmp;
                ++a;
            }
            a = 99;
            while (a >= 1 && arr[a] < arr[a - 1]) {
                int tmp = arr[a];
                arr[a] = arr[a - 1];
                arr[a - 1] = tmp;
                --a;
            }
        }
        cout << '#' << citer << ' ' << arr[99] - arr[0] << '\n';
    }
}
