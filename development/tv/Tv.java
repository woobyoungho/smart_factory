package com.byoungho.exam.tv;

//private, default, protected, public
//보통 private public 사용
public class Tv {
	// 사용자 지정의 클래스
	protected int channel;
	protected int volume;
	// private은 해당 클래스 안에서만 사용가능.
	// private 사용시 TvTest에서 오류.

	Tv() {
		super();
		System.out.println("Tv 생성자");
	}

	Tv(int channel, int volume) {
		setChannel(channel);
		// 자신의 객체 안의 값을 this.channel 에 넣는다.
		setVolume(volume);
	}

	public int getChannel() {
		return channel;
	}

	public void setChannel(int channel) {
		if (channel > 300) {
			this.channel = 300;
		} else if (channel <= 0) {
			this.channel = 1;
		} else {
			this.channel = channel;
		}
	}

	public int getVolume() {
		return volume;
	}

	public void setVolume(int volume) {
		if (volume > 20) {
			this.volume = 20;
		} else if (volume < 0) {
			this.volume = 0;
		} else {
			this.volume = volume;
		}

	}

	void showState() {
		System.out.printf("channel : %d, volume : %d\n", channel, volume);
		// System.out.println("channel : " + channel + "volume : " + volume);
	}

	void channelUp() {
		channel++;
	}

	void channelDown() {
		channel--;
	}

	void volumeUp() {
		volume++;
	}

	void volumeDown() {
		volume--;
	}
}
