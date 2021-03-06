/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/NSCopying.h>

@class NSDictionary;

@interface MTLCompileOptions : NSObject <NSCopying> {

	BOOL _fastMathEnabled;
	BOOL _debuggingEnabled;
	NSDictionary* _preprocessorMacros;

}

@property (nonatomic,copy) NSDictionary * preprocessorMacros;              //@synthesize preprocessorMacros=_preprocessorMacros - In the implementation block
@property (assign,nonatomic) BOOL fastMathEnabled;                         //@synthesize fastMathEnabled=_fastMathEnabled - In the implementation block
@property (assign,nonatomic) BOOL debuggingEnabled;                        //@synthesize debuggingEnabled=_debuggingEnabled - In the implementation block
-(NSDictionary *)preprocessorMacros;
-(void)setPreprocessorMacros:(NSDictionary *)arg1 ;
-(BOOL)fastMathEnabled;
-(void)setFastMathEnabled:(BOOL)arg1 ;
-(BOOL)debuggingEnabled;
-(void)setDebuggingEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

