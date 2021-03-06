/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@protocol MFMessageComposeViewControllerDelegate;
@class NSArray, NSString, NSMutableArray;

@interface MFMessageComposeViewController : UINavigationController {

	<MFMessageComposeViewControllerDelegate>* _messageComposeDelegate;
	NSArray* _recipients;
	NSString* _body;
	NSString* _subject;
	NSMutableArray* _mutableAttachmentURLs;
	unsigned long long _currentAttachedVideoCount;
	unsigned long long _currentAttachedAudioCount;
	unsigned long long _currentAttachedImageCount;
	NSMutableArray* _temporaryAttachmentURLs;
	NSArray* _attachments;

}

@property (assign,nonatomic) <MFMessageComposeViewControllerDelegate> * messageComposeDelegate;              //@synthesize messageComposeDelegate=_messageComposeDelegate - In the implementation block
@property (nonatomic,copy) NSArray * recipients;                                                             //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy) NSString * body;                                                                  //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSString * subject;                                                               //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSArray * attachments;                                                        //@synthesize attachments=_attachments - In the implementation block
@property (assign,nonatomic) unsigned long long currentAttachedVideoCount;                                   //@synthesize currentAttachedVideoCount=_currentAttachedVideoCount - In the implementation block
@property (assign,nonatomic) unsigned long long currentAttachedAudioCount;                                   //@synthesize currentAttachedAudioCount=_currentAttachedAudioCount - In the implementation block
@property (assign,nonatomic) unsigned long long currentAttachedImageCount;                                   //@synthesize currentAttachedImageCount=_currentAttachedImageCount - In the implementation block
@property (nonatomic,copy) NSMutableArray * mutableAttachmentURLs;                                           //@synthesize mutableAttachmentURLs=_mutableAttachmentURLs - In the implementation block
@property (nonatomic,copy) NSMutableArray * temporaryAttachmentURLs;                                         //@synthesize temporaryAttachmentURLs=_temporaryAttachmentURLs - In the implementation block
+(bool)_canSendText;
+(void)_updateServiceAvailability;
+(void)_serviceAvailabilityChanged:(id)arg1 ;
+(void)_setupAccountMonitor;
+(bool)canSendSubject;
+(bool)canSendAttachments;
+(void)_startListeningForAvailabilityNotifications;
+(void)initialize;
+(bool)canSendText;
+(bool)isMMSEnabled;
+(bool)isiMessageEnabled;
+(bool)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3 ;
+(bool)isSupportedAttachmentUTI:(id)arg1 ;
+(double)maxTrimDurationForAudio;
+(double)maxTrimDurationForVideo;
-(void)disableUserAttachments;
-(void)setCurrentAttachedVideoCount:(unsigned long long)arg1 ;
-(void)setCurrentAttachedAudioCount:(unsigned long long)arg1 ;
-(void)setCurrentAttachedImageCount:(unsigned long long)arg1 ;
-(id)_MIMETypeForURL:(id)arg1 ;
-(bool)_isVideoMIMEType:(id)arg1 ;
-(bool)_isAudioMIMEType:(id)arg1 ;
-(bool)_isImageMIMEType:(id)arg1 ;
-(id)mutableAttachmentURLs;
-(id)_contentTypeForMIMEType:(id)arg1 ;
-(void)_updateAttachmentCountForAttachmentURL:(id)arg1 ;
-(id)_buildAttachmentInfoForAttachmentURL:(id)arg1 andAlternameFilename:(id)arg2 ;
-(id)temporaryAttachmentURLs;
-(bool)canAddAttachmentURL:(id)arg1 ;
-(bool)addAttachmentData:(id)arg1 withAlternateFilename:(id)arg2 ;
-(void)_setCanEditRecipients:(bool)arg1 ;
-(id)messageComposeDelegate;
-(void)setMutableAttachmentURLs:(id)arg1 ;
-(unsigned long long)currentAttachedVideoCount;
-(unsigned long long)currentAttachedAudioCount;
-(unsigned long long)currentAttachedImageCount;
-(void)setTemporaryAttachmentURLs:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(id)body;
-(void)setSubject:(id)arg1 ;
-(id)subject;
-(void)setMessageComposeDelegate:(id)arg1 ;
-(void)setBody:(id)arg1 ;
-(bool)addAttachmentURL:(id)arg1 withAlternateFilename:(id)arg2 ;
-(bool)addAttachmentData:(id)arg1 typeIdentifier:(id)arg2 filename:(id)arg3 ;
-(id)attachmentURLs;
-(id)attachments;
-(void)smsComposeControllerCancelled:(id)arg1 ;
-(void)smsComposeControllerSendStarted:(id)arg1 ;
-(id)recipients;
-(void)setRecipients:(id)arg1 ;
@end

