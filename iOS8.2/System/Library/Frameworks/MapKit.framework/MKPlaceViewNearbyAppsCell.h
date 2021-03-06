/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:36 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AddressBookUI/ABContactCell.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol MKPlaceViewNearbyAppsCellDelegate;
@class UILabel, UICollectionView, _MKNearbyAppsFlowLayout, NSLayoutConstraint, NSArray, NSString;

@interface MKPlaceViewNearbyAppsCell : ABContactCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	UILabel* _headerLabel;
	UICollectionView* _collectionView;
	_MKNearbyAppsFlowLayout* _flowLayout;
	NSLayoutConstraint* _headerBaselineConstraint;
	NSLayoutConstraint* _collectionHeightConstraint;
	CGSize _iconSize;
	NSArray* _storeItems;
	id<MKPlaceViewNearbyAppsCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MKPlaceViewNearbyAppsCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * storeItems;                                               //@synthesize storeItems=_storeItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_headerLabelFont;
+(float)_headerBaselineOffsetFromTop;
+(CGSize)_iconSize;
+(char)requiresConstraintBasedLayout;
+(id)reuseIdentifier;
+(float)contentHeight;
-(void)contentSizeDidChange;
-(void)setStoreItems:(NSArray *)arg1 ;
-(NSArray *)storeItems;
-(void)dealloc;
-(void)setDelegate:(id<MKPlaceViewNearbyAppsCellDelegate>)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id<MKPlaceViewNearbyAppsCellDelegate>)delegate;
-(void)tintColorDidChange;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
@end

