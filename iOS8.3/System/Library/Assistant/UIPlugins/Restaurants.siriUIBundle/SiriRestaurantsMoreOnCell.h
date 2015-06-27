/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:07:18 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Restaurants/Restaurants-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>
#import <Restaurants/SiriRestaurantsLogoButtonDelegate.h>

@class UILabel, SiriRestaurantsLogoButton, NSString;

@interface SiriRestaurantsMoreOnCell : SiriUIContentCollectionViewCell <SiriRestaurantsLogoButtonDelegate> {

	UILabel* _label;
	SiriRestaurantsLogoButton* _logoView;
	NSString* _providerName;

}

@property (nonatomic,retain) SiriRestaurantsLogoButton * logoView;              //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,copy) NSString * providerName;                             //@synthesize providerName=_providerName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)logoButtonDidUpdateLogo:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(SiriRestaurantsLogoButton *)logoView;
-(void)setLogoView:(SiriRestaurantsLogoButton *)arg1 ;
-(NSString *)providerName;
-(void)setProviderName:(NSString *)arg1 ;
@end
