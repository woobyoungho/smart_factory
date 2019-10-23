package com.byoungho.exam.tv;

public class TvTest {
	public static void main(String[] args) {
		
		//객체화, 인스턴스
		Tv tv1 = new Tv(500, 30);
		//생성자를 주소값에 저장시키는 기능
		//tv는 주소값(레퍼런스 변수)(참조 변수)
		//생성자 호출 반드시
		//Tv(){} 메소드와 비슷하지만 생성자라 한다.
		
		//int, float, double, char, boolean, byte, short, long
		// 자바에서는 8개만 리터럴값 저장
		// 나머지는 주소값 저장
		//int[] array = {1,2,3};
		
		Tv tv2 = new Tv();
		
		
		//중요!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		//은닉화된 값 넣는 법 2가지
		//첫번째 생성자를 이용해 넣는다.
		//두번째 setVolume, setChannel로 값 가져오기
		
		/*
		tv1.channel = 10;
		
		tv2.channel = 20;
		
		tv1.volumeDown();
		tv2.volumeUp();
		*/
		
		
		/*
		System.out.println("변경 전");
		tv1.showState();
		tv2.showState();
		System.out.println();
		
		System.out.println("변경 후");
		tv2.setChannel(10);
		tv2.getChannel();
		*/
		
		
		tv2.setChannel(500);
		tv2.setVolume(100);
		
		tv1.showState();
		tv2.showState();
		
		int volume = tv1.getVolume();
		System.out.println("tv1의 볼륨 :  " + volume);
		
	}
}
