/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:18:01 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIImage;

@interface _UIImageViewPretiledImageCacheKey : NSObject {

	UIImage* _originalImage;
	CGSize _pretiledSize;

}
+(id)cacheKeyWithOriginalImage:(id)arg1 pretiledSize:(CGSize)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
@end
