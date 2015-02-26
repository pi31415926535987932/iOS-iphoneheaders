/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUI.framework/AccessibilityUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol AXUIMessageSenderDelegate;
@class NSMutableArray, AXAccessQueue;

@interface AXUIMessageSender : NSObject {

	BOOL _sendingMessage;
	<AXUIMessageSenderDelegate>* _delegate;
	NSMutableArray* _messageQueue;
	AXAccessQueue* _messageSchedulingSerializationQueue;

}

@property (assign,nonatomic) <AXUIMessageSenderDelegate> * delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * messageQueue;                                    //@synthesize messageQueue=_messageQueue - In the implementation block
@property (nonatomic,retain) AXAccessQueue * messageSchedulingSerializationQueue;              //@synthesize messageSchedulingSerializationQueue=_messageSchedulingSerializationQueue - In the implementation block
@property (assign,getter=isSendingMessage,nonatomic) BOOL sendingMessage;                      //@synthesize sendingMessage=_sendingMessage - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned)arg2 context:(void*)arg3 targetAccessQueue:(id)arg4 completionRequiresWritingBlock:(BOOL)arg5 completion:(/*^block*/ id)arg6 ;
-(id)sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned)arg2 context:(void*)arg3 error:(id*)arg4 ;
-(void)setMessageSchedulingSerializationQueue:(id)arg1 ;
-(void)setMessageQueue:(id)arg1 ;
-(void)_sendXPCMessage:(id)arg1 context:(void*)arg2 remainingAttempts:(unsigned)arg3 previousError:(id)arg4 completion:(/*^block*/ id)arg5 ;
-(id)messageSchedulingSerializationQueue;
-(id)messageQueue;
-(void)setSendingMessage:(BOOL)arg1 ;
-(void)_didFinishSendingXPCMessage:(id)arg1 replyCustomData:(void*)arg2 ;
-(void)_performBlock:(/*^block*/ id)arg1 inAccessQueue:(id)arg2 treatAsWritingBlock:(BOOL)arg3 ;
-(BOOL)isSendingMessage;
@end
