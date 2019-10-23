package com.byoungho.exam.tv;

public class LGTv extends Tv {
	public void record() {
		System.out.println("녹화를 하고 있습니다.");
	}
	
	@Override
	public String toString() {
		return "LGTv임!!";
	}
	
	public static String model;
	// String 문자열 상수라서 값이 입력되어야 함.
	
	public LGTv() {}
	//기본 생성자
	
	public LGTv(String str){
		model = str;
	}
	//파라메타 있는 생성자
	//생성자 특징!!!!
	//1. 리턴 타입이 없음
	//2. 메소드 이름이랑 똑같음
	
	//대부분 static 사용 지향
	//1. 멤버필드사용할 때
	//2. 파라매트사용할 때
	
}
