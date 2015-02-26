/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface UIStoryboardSegue : NSObject {

	NSString* _identifier;
	id _sourceViewController;
	id _destinationViewController;
	/*^block*/id _performHandler;
	id _sender;

}

@property (nonatomic,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) id sourceViewController;                   //@synthesize sourceViewController=_sourceViewController - In the implementation block
@property (nonatomic,readonly) id destinationViewController;              //@synthesize destinationViewController=_destinationViewController - In the implementation block
@property (nonatomic,copy) id performHandler;                             //@synthesize performHandler=_performHandler - In the implementation block
@property (nonatomic,retain) id sender;                                   //@synthesize sender=_sender - In the implementation block
+(id)segueWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3 performHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(NSString *)identifier;
-(void)_prepare;
-(id)destinationViewController;
-(id)sourceViewController;
-(void)perform;
-(id)sender;
-(id)initWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
-(void)setSender:(id)arg1 ;
-(void)setPerformHandler:(id)arg1 ;
-(id)performHandler;
@end
