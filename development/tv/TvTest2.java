package com.byoungho.exam.tv;

public class TvTest2 {
	public static void main(String[] args) {
		/*
		LGTv lgtv1 = new LGTv();
		lgtv1.showState();
		lgtv1.setChannel(500);
		lgtv1.showState();
		lgtv1.record();

		SamsungTv smtv1 = new SamsungTv();
		smtv1.channelUp();
		smtv1.showState();
		*/
		
		SamsungTv smtv1 = new SamsungTv();
		LGTv lgtv2 = new LGTv();
		LGTv lgtv3 = new LGTv();
		System.out.println(lgtv2.toString());
		System.out.println(lgtv3);
		System.out.println(smtv1);
		smtv1.showState();
	}
}
