pipeline{
    agent {
        docker {
            image 'gcc'
            label 'docker_node'
        }
    }
    stages {
        stage('Build') {
            steps {
                sh 'g++ -o main main.cpp'
            }
        }
        stage('Run') {
            steps {
                sh './main'
            }
        }
        stage('Sonarqube') {
    environment {
        scannerHome = tool 'SonarQubeScanner'
    }
    steps {
        withSonarQubeEnv('sonarqube') {
            sh "${scannerHome}/bin/sonar-scanner"
        }
        timeout(time: 10, unit: 'MINUTES') {
            waitForQualityGate abortPipeline: true
        }
    }
}
    }
}