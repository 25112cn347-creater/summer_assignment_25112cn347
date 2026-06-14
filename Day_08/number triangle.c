/* Write a program to Print number triangle.
1 
12 
123 
1234 
12345 */

int n; // take n=5 for above pattern
    cout<<"enter sides of triangle";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
