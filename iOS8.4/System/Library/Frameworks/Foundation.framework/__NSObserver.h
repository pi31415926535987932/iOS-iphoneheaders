/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:52 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSNotificationCenter, NSOperationQueue, NSString;

@interface __NSObserver : NSObject {

	NSNotificationCenter* nc;
	NSOperationQueue* queue;
	NSString* name;
	id object;
	/*^block*/id block;

}
+(id)observerWithCenter:(id)arg1 queue:(id)arg2 name:(id)arg3 object:(id)arg4 block:(/*^block*/id)arg5 ;
+(BOOL)isAnObserver:(id)arg1 ;
+(void)forgetObserver:(id)arg1 ;
-(void)_doit:(id)arg1 ;
-(void)dealloc;
-(id)name;
-(id)object;
@end

