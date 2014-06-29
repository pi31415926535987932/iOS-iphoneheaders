/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class UICollectionViewLayoutAttributes, NSArray;

@interface SBStarkNotificationLayout : UICollectionViewLayout {

	UICollectionViewLayoutAttributes* _notificationAttributes;
	UICollectionViewLayoutAttributes* _previousNotificationAttributes;
	NSArray* _subActionsAttributes;
	NSArray* _previousSubActionsAttributes;
	UICollectionViewLayoutAttributes* _backgroundAttributes;
	UICollectionViewLayoutAttributes* _previousBackgroundAttributes;
	float _notificationHeight;
	float _transitionSpacing;
	UIEdgeInsets _subActionsInsets;
	float _subActionPadding;
	float _subActionHeight;

}

@property (assign,nonatomic) float notificationHeight;                   //@synthesize notificationHeight=_notificationHeight - In the implementation block
@property (assign,nonatomic) float transitionSpacing;                    //@synthesize transitionSpacing=_transitionSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets subActionsInsets;              //@synthesize subActionsInsets=_subActionsInsets - In the implementation block
@property (assign,nonatomic) float subActionPadding;                     //@synthesize subActionPadding=_subActionPadding - In the implementation block
@property (assign,nonatomic) float subActionHeight;                      //@synthesize subActionHeight=_subActionHeight - In the implementation block
-(void)setNotificationHeight:(float)arg1 ;
-(void)setSubActionsInsets:(UIEdgeInsets)arg1 ;
-(void)setSubActionPadding:(float)arg1 ;
-(void)setSubActionHeight:(float)arg1 ;
-(id)_transitionAttributesForAction:(int)arg1 withLayoutAttributes:(id)arg2 ;
-(float)notificationHeight;
-(float)transitionSpacing;
-(void)setTransitionSpacing:(float)arg1 ;
-(UIEdgeInsets)subActionsInsets;
-(float)subActionPadding;
-(float)subActionHeight;
-(void)dealloc;
-(id)init;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(id)_indexPathsToDeleteForDecorationViewOfKind:(id)arg1 ;
-(id)_indexPathsToInsertForDecorationViewOfKind:(id)arg1 ;
@end
