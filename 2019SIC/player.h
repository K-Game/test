#pragma once

class Player {
private:
	Player();
	~Player();

public:
	
	//システム
	void Init();
	void Undeta();
	
	//挙動
	void PMove();
	void DeadCheck();

	void PShot();

};