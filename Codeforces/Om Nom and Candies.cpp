#include <bits/stdc++.h>

using namespace std;

int main(){
	int c,Hr,Hb,Wr,Wb,ans=0,modr=0,modb=0;
	cin>>c>>Hr>>Hb>>Wr>>Wb;
	if(c%(Wr+Wb) == 0){
		ans = (Hr+Hb)*(c/(Wr+Wb));
	}
	else{
		if(Hr > Hb && c%Wr == 0){
			ans = Hr*(c/Wr);

		}
		if(Hb > Hr && c%Wb == 0){
			ans = Hb*(c/Wb);

		}
		if(Hb == Hr){
			if(Wr <= Wb && c%Wr == 0){
				ans = Hr*(c/Wr);
			}
			if(Wb < Wr && c%Wb == 0){
				ans = Hb*(c/Wb);
			}

		}
		else{
			modr = (c%Wr);
			modb = (c%Wb);
			if(Hr >= Hb && modr%Wb == 0){
				ans = Hr*(c/Wr)+Hb*(modr/Wb);
			}
			if(Hb > Hr && modb%Wr == 0){
				ans = Hb*(c/Wb)+Hr*(modb/Wr);
			}
			else{
				if(Hr >= Hb){
					ans = Hr*(c/Wr)+Hb*(modr/Wb);
				}
				if(Hb > Hr){
					ans = Hb*(c/Wb)+Hr*(modb/Wr);
				}
			}

		}

	}
	cout<<ans<<endl;
	return 0;
}