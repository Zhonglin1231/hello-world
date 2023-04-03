# include<iostream>
using namespace std;

int SIZE, num,ele;



int main() {

    int* set;
    set = new int[1];
    cin >> SIZE;
    cin >> ele;
    for (int j = 0; j < SIZE; j++)
    {
        //create temporary array p.
        num = j + 1;
        int* p;
        p = new int[num];
        set[j] = ele;

        for (int i = 0; i < num; i++)
        {
            p[i] = set[i];
        }

        // delete origional array
        delete[] set;

        //re-create larger array
        set = new int[num + 1];

        for (int i = 0; i < num; i++)
            set[i] = p[i];

        delete[] p;

        if (num == SIZE)
            break;
        cin >> ele;

    }

    // find mode
    int max = 0;
    int max_ct = 0;
    for (int k = 0; k < SIZE; k++)
    {
        int ct = 0;

        for (int u = 0; u < SIZE; u++)
        {
            if (set[k] == set[u])
                ct++;
        }

        if (ct >= max_ct)
        {
            max_ct = ct;
            max = set[k];
        }
            
    }

    cout << max<<endl;
}