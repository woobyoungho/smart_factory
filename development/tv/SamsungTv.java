package com.byoungho.exam.tv;

public class SamsungTv extends Tv {
	@Override
	// tip) 메모하는 습관들이기
	//channelUp 메소드가 Tv클래스에 있을 때
	//오버라이드 할 수 있음.
	
	void channelUp() {
		channel++; 
		//Tv 클래스에서 변수형태 protected 썻을 때 가능
		
		/*
		int ch = getChannel();
		ch += 5;
		setChannel(ch);
		//protected 안쓰고 private 쓸 때도 사용가능
		*/
	}
	
	@Override
	public String toString() {
		return String.format
				("%s의 채널 : %d, 볼륨 : %d", "삼성", channel, volume);
	}
	
	//@Override
	//오버라이드란 상속받는 부모클래스와의
	//이름이 동일해야 사용할 수 있고
	//오버로딩이란 동일한 이름의 메소드 중
	//파라메타를 한 개, 두 개 사용 할 수 있는 것
	//오버로딩 예로 wait란 메소드
}
