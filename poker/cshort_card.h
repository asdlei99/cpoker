/********************************************************************
created: 		2019-06-27

author:			chensong

purpose:		poker algorithms
*********************************************************************/


#ifndef _C_SHORT_CARD_H_
#define _C_SHORT_CARD_H_

#include "cshort_define.h"
namespace chen {
	
	/** 
	* ��ʼ���Ƶ�����
	* @param deck: �Ƶ����� in  out
	**/
	void init_deck(int32 *deck);

	/** 
	*  ϴ��  
	*  @param deck: �Ƶ����� in  out
	**/
	void shuffle_deck(int32 *deck);


	/**
	* ���������ҳ�������������
	* @param seven_cards: ������   in
	* @param five_cards: ������    in | out
	* return ����ֵ �ƵĴ�С
	*/
	int32 find_seven_hand(int32 seven_cards[7], int32 *five_cards[5]);

	/** 
	* ��ȡ���Ƶ�ֵ
	*  @param hand: �����ƿ�ʼ��ַ   in
	*  @return ����ֵ�� �ƵĴ�С
	**/
	int32 seach_five_cards(int32 * hand);

	/**
	* ��ȡ���Ƶ�ֵ
	*  @param card1: ��һ����   in
	*  @param card2: �ڶ�����   in
	*  @param card3: ��������   in
	*  @param card4: ��������   in
	*  @param card5: ��������   in
	*  @return ����ֵ�� �ƵĴ�С
	**/
	int32 seach_five_cards(int32 card1, int32 card2, int32 card3, int32 card4, int32 card5);

	/** 
	* ���� ��������ݵ��±�
	*  @param key: �����Ƶ�Ψһֵ  => "���� 8λ��˵�ֵ"  in 
	*  @return ����ֵ�� �����ƶ�Ӧ�Ĵ�С��ֵ
	**/
	int32 find_array(int32 key);

	/**
	*  ��������
	*  @param value: �����Ƶ�Ψһֵ   in
	*  @return ����ֵ������ �� ESHORTS_ENUM
	**/
	int32 card_type(int32 value);
} // !namespace chen


#endif // !#define _C_SHORT_CARD_H_