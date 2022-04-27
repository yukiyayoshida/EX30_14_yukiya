＃include < iostream  > _
＃「 getVolumeSurface.h 」を含める
名前空間 stdを使用します;

int  main（）

{
	ダブルx、y、z;
	cout << "幅を：";
	cin >> x;
	cout << "高さ：";
	cin >> y;
	cout << "奥行：";
	cin >> z;
	ダブルボリューム、表面;
	getVolumeSurface（x、y、z、＆surface、＆volume）;
	cout << "体積" << ボリューム << endl << "前" << 表面 << endl;

	 0を返す;
}