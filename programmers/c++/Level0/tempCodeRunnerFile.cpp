cin >> str;
    cin >> n;

    for(int i = 0; i<str.size()-1;) {
        tmp = str.substr(0,n);
        str = str.substr(n,str.size()-1);
        v.push_back(tmp);

        if(i<=str.size()) {
            i+=n;
        } else {
            v.push_back(str);
        }
    }