// Fill out your copyright notice in the Description page of Project Settings.


#include "KCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"


// Sets default values
AKCharacter::AKCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent");
	SpringArmComp->SetupAttachment(RootComponent);

	CameraComp = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	CameraComp->SetupAttachment(SpringArmComp);
}

// Called when the game starts or when spawned
void AKCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AKCharacter::MoveForward(float Value)
{
	AddMovementInput(GetActorForwardVector(), Value);

}

void AKCharacter::MoveRight(float Value)
{
	AddMovementInput(GetActorRightVector(), Value);
}



// Called every frame
void AKCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AKCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AKCharacter::MoveForward);
	//ǰ���ͺ��ˣ�PlayerCOmponent�ĺ���ʵ�ֵ�
	PlayerInputComponent->BindAxis("MoveRight", this, &AKCharacter::MoveRight);
	//�����ߣ�ʵ��ͬ��

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	//Yaw���룬����ת��������
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	//����,û�����ã�ԭ����
}

