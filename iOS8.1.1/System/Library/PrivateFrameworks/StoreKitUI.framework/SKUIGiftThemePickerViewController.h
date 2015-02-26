/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIGiftStepViewController.h>
#import <StoreKitUI/SKUIGiftConfigurationObserver.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class SKUIGiftThemeCollectionView, UIImage, UIPageControl, UITapGestureRecognizer, NSArray, NSString;

@interface SKUIGiftThemePickerViewController : SKUIGiftStepViewController <SKUIGiftConfigurationObserver, UICollectionViewDataSource, UICollectionViewDelegate> {

	BOOL _animatingScrollView;
	SKUIGiftThemeCollectionView* _collectionView;
	UIImage* _itemImage;
	UIPageControl* _pageControl;
	long long _selectedThemeIndex;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSArray* _themes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_collectionView;
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(void)_nextAction:(id)arg1 ;
-(void)_setItemImage:(id)arg1 error:(id)arg2 ;
-(void)_backgroundTapAction:(id)arg1 ;
-(void)_setSelectedThemeIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)giftConfigurationController:(id)arg1 didLoadImageForTheme:(id)arg2 ;
@end
