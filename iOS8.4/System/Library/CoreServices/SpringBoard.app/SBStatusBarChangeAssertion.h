/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface SBStatusBarChangeAssertion : NSObject {

	NSString* _reason;

}

@property (nonatomic,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
+(id)assertionWithReason:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)reason;
-(id)initWithReason:(id)arg1 ;
@end
