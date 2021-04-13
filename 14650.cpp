#include <iostream>
using namespace std;
int N;
long long multipleOfThree(int num, int sum, int length)

{

        //조건 충족

        if (length == 1 && sum % 3 == 0)

                 return 1;

        //조건 불충족

        else if (length == 1)

                 return 0;

 

        long long result = 0;

        for (int i = 0; i <= 2; i++)

                 result += multipleOfThree(i, sum + i, length - 1);

        return result;

}

 

int main(void)

{

        ios_base::sync_with_stdio(0);cin.tie(0);

        cin >> N;

 

        if (N == 1)

                 cout << 0 << "\n";

        else

        {

                 long long result = 0;

                 //0으로 시작할 수 없다

                 for (int i = 1; i <= 2; i++)

                         result += multipleOfThree(i, i, N);

                 cout << result << "\n";

        }

        return 0;

}
