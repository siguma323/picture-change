
# include <Siv3D.hpp>

void Main()
{
	const Texture a(L"Example/Particle.png");
	const Texture b(L"Example/Windmill.png");

	//描画の画像を変更するフラグ
	bool is_change_picture = false;

	while (System::Update())
	{
		// 現在のカーソルの位置取得
		const Point pos = Mouse::Pos();
		
		//カーソルの位置　xが100以上でyが100以上のとき
		if (pos.x > 100 && pos.y > 100)
		{
			//左クリックしたとき
			if (Input::MouseL.clicked)
			{
				//フラグ切り替え
				is_change_picture ^= 1;
			}
		}

		if (is_change_picture)
		{
			a.draw();
		}
		else
		{
			b.draw();
		}
	}


}
