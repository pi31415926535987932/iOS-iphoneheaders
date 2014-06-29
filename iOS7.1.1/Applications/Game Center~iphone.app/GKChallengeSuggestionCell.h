/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center~iphone/Game Center~iphone-Structs.h>
#import <GameCenterUI/GKCollectionViewCell.h>

@class GKContiguousContainerView, GKLabel, UIImageView;

@interface GKChallengeSuggestionCell : GKCollectionViewCell {

	GKContiguousContainerView* _textContainerView;
	GKLabel* _titleLabel;
	GKLabel* _infoLabel;
	UIImageView* _iconView;

}

@property (nonatomic,retain) GKContiguousContainerView * textContainerView;              //@synthesize textContainerView=_textContainerView - In the implementation block
@property (nonatomic,retain) GKLabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) GKLabel * infoLabel;                                        //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                     //@synthesize iconView=_iconView - In the implementation block
-(void)loadIconImageWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)iconView;
-(void)didUpdateModel;
-(void)setIconView:(id)arg1 ;
-(void)setTextContainerView:(id)arg1 ;
-(id)textContainerView;
-(void)setInfoLabel:(id)arg1 ;
-(id)iconSource;
-(void)loadImageWithSource:(id)arg1 URLString:(id)arg2 withHandler:(/*^block*/ id)arg3 ;
-(id)iconURLString;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)titleLabel;
-(void)setTitleLabel:(id)arg1 ;
-(id)infoLabel;
@end
