vector<int> minAnd2ndMin(int a[], int n) {
    vector<int> v;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    
    if(s.size()>=2)
    {
        for(auto i: s)
        {
             v.push_back(i);
            
            if(v.size()==2)
                break;
        }
    }
    else
    {
        v.push_back(-1);
        v.push_back(-1);
    }
    return v;
}
