/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICachedLayout.h>

@class NSArray, NSString;

@interface SKUIEditorialLinkLayout : NSObject <SKUICachedLayout> {

	CGSize* _sizes;
	CGSize _totalSize;
	NSArray* _links;

}

@property (nonatomic,readonly) NSArray * links;                     //@synthesize links=_links - In the implementation block
@property (nonatomic,readonly) CGSize totalSize;                    //@synthesize totalSize=_totalSize - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enumerateLinesUsingBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(NSArray *)links;
-(id)initWithLayoutRequest:(id)arg1 ;
-(CGSize)sizeForLinkAtIndex:(int)arg1 ;
-(CGSize)totalSize;
@end

