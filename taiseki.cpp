＃include < iostream  > _
＃「 getVolumeSurface.h 」を含める
名前空間 stdを使用します;

int  main（）
{
	ダブルx、y、z;
	cout << "幅を入力：";
	cin >> x;
	cout << "高さをツ：";
	cin >> y;
	cout << "奥行をする：";
	cin >> z;
	ダブルボリューム、表面;
	getVolumeSurface（x、y、z、＆surface、＆volume）;
	cout << "体積は" << ボリューム << endl << "前は" << 表面 << endl;

	 0を返す;
}