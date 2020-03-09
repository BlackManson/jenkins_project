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
    }
}