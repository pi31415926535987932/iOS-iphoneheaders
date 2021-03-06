/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CKSMSCompose;
@class NSMutableArray;

@interface CKSMSComposeQueuingRemoteViewControllerProxy : NSObject {

	NSMutableArray* _queuedInvocations;
	id<CKSMSCompose> _serviceViewControllerProxy;

}

@property (nonatomic,retain) NSMutableArray * queuedInvocations;                       //@synthesize queuedInvocations=_queuedInvocations - In the implementation block
@property (nonatomic,retain) id<CKSMSCompose> serviceViewControllerProxy;              //@synthesize serviceViewControllerProxy=_serviceViewControllerProxy - In the implementation block
-(void)dealloc;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id<CKSMSCompose>)serviceViewControllerProxy;
-(void)forwardInvocation:(id)arg1 ;
-(void)setServiceViewControllerProxy:(id<CKSMSCompose>)arg1 ;
-(void)setQueuedInvocations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)queuedInvocations;
@end

